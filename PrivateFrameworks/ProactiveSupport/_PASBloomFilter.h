//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface _PASBloomFilter : NSObject
{
    CDUnknownFunctionPointerType _computeHashes;
    NSData *_data;
    unsigned int _numBits;
    int _numHashFunctions;
    int _hashArrayLength;
}

+ (id)bloomFilterWithPathToFile:(id)arg1;
- (void).cxx_destruct;
- (id)combineHashesWithSeed:(int)arg1 hashA:(id)arg2 hashB:(id)arg3 reuse:(id)arg4;
- (BOOL)getWithHashes:(id)arg1;
- (id)_computeHashesWithSeed:(int)arg1 bytes:(const void *)arg2 length:(unsigned long long)arg3 reuse:(id)arg4;
- (id)computeHashesWithSeed:(int)arg1 forData:(id)arg2 reuse:(id)arg3;
- (id)computeHashesForString:(id)arg1 reuse:(id)arg2;
- (int)numHashes;
- (id)newHashesArray;
- (id)init;
- (id)initDummy;
- (id)initWithData:(id)arg1 numBits:(unsigned int)arg2 hashFunctionCode:(unsigned int)arg3 numHashFunctions:(int)arg4;

@end

