# Objects
- Objects are collections of properties.
- Properties are a key-value pair.
- Rather than accessing data using an index, we use custom keys.

## Using an Object
```js
const fitBitData = {
    totalSteps: 308727,
    totalMiles: 211.8,
    avgCalorieBurn: 5755,
    workoutsThisWeek: '5 of 7',
    avgGoodSleep: '2.13'
};
```

```js
Layout: PROPERTY KEY + VALUE
Key-Value Pairs:
username: --> 'crazyCatLady'
upvotes: --> 7
text --> 'great post!'
```

Object literals support all data types.

## Accessing Data from an Object
```js
const palette = {
    red: '#eb4d4b';
    yellow: '#f9ca24';
    blue: '#30336b'
}

palette.red //#eb4d4b
palette['blue'] //#30336b

let color = 'yellow';
palette[color]  //#f9ca24
```

## Updating and Adding Properties
```js
fitBitData.workoutsThisWeek = '6 out of 7'
fitBitData.totalMiles += 7.5;
```