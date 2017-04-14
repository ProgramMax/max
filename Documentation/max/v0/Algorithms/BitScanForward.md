# max::Algorithms::BitScanForward

API version: [**v0**](../../v0.md)

## Note

This function searches the **Mask** parameter for the first bit which is set to 1. It searches in the forward direction, from least significant bit to most significant bit.

Behavioor is undefined when the **Mask** parameter is 0.
 
This function is [pure](../Compiling/MAX_PURE.md).

## Signature

```c++
MAX_SEMI_PURE(
constexpr uint8_t BitScanForward(

	const uint8_t Mask

) MAX_DOES_NOT_THROW
);
```

## Parameters

* **Mask**
    * The mask to scan.

## Returns

Returns the 0-based index of the first bit set to 1.

## Example

```c++
auto index = max::Algorithms::BitScanForward( 0b10 );
```

## Implementation

Go to [the implementation](../../../../Code/Include/max/Algorithms/BitScanForward.inl#L30).