import java.util.ArrayList;

class SitoStatic {
    public static void main(String args[]) {
        final int k = 1 << 11;
        Boolean[] isPrime = new Boolean[k];
        ArrayList<Integer> primes = new ArrayList<>();
        isPrime[0] = false;
        isPrime[1] = false;
        for (int i = 2; i < k; i++)
            isPrime[i] = true;
        for (int i = 2; i * i <= k; i++)
            if (isPrime[i] == true)
                for (int j = 2 * i; j < k; j += i)
                    isPrime[j] = false;
        for (int i = 2; i < k; i++)
            if (isPrime[i])
                primes.add(i);
    }
}