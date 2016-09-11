# max::Containers::Range::ctor

API version: [**v0**](../../v0.md)

## Note

This ctor does not enforce Maximum >= Minimum. It is the developer's responsibility to provide valid values.
A convenience function, [max::Containers::MakeRange](MakeRange.md), is provided to order the values.

## Signature

```c++
Range(

	const T Minimum,
	const T Maximum

) MAX_DOES_NOT_THROW;
```

## Parameters

* **Minimum**
    * The minimum value in the range (inclusive).
* **Maximum**
	* The maximum value in the range (inclusive).

## Example

```c++
auto range = max::Containers::Range< int >{ 1, 100 };
max::Algorithms::IsBetween( 50, range );
```

## Implementation

Go to [the implementation](../../../Code/Include/max/Containers/Range.inl#L12).