/**
 * Created by yan on 15-9-6.
 */
var assert = require('assert');

describe('NativeExtension', function () {
    it('should have aString methid', function () {
        assert.equal(require('../').aString(), 'this is a thing');

        console.log(require('../').mem());
    });
});
