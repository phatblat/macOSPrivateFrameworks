//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface OADPath : NSObject
{
    struct CGSize mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (void).cxx_destruct;
- (id)description;
- (void)setStroked:(BOOL)arg1;
- (BOOL)stroked;
- (void)setFillMode:(int)arg1;
- (int)fillMode;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCount;
- (void)addElement:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (id)init;

@end
