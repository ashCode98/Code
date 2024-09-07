module.exports = {
    // ...
    theme: {
        extend: {
            animation: {
                pulse: 'pulse 2s linear infinite',
            },
            keyframes: {
                pulse: {
                    '0%, 100%': { transform: 'scale(1)' },
                    '50%': { transform: 'scale(1.1)' },
                },
            },
        },
    },
}