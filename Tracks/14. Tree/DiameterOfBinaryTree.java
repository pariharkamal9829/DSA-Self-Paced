// Rest of the code is already given as Driver Code time complexity reduced in latest code

class Solution {
    class Result {
        int diameter;
        int height;

        Result(int diameter, int height) {
            this.diameter = diameter;
            this.height = height;
        }
    }

    Result diameterAndHeight(Node root) {
        if (root == null) {
            return new Result(0, 0);
        }

        Result leftResult = diameterAndHeight(root.left);
        Result rightResult = diameterAndHeight(root.right);

        int height = Math.max(leftResult.height, rightResult.height) + 1;

        int throughRoot = leftResult.height + rightResult.height + 1;
        int maxDiameter = Math.max(throughRoot, Math.max(leftResult.diameter, rightResult.diameter));

        return new Result(maxDiameter, height);
    }

    int diameter(Node root) {
        if (root == null) {
            return 0;
        }

        return diameterAndHeight(root).diameter;
    }
}
