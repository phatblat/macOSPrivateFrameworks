//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSValue;

@interface KHLayoutItem : NSObject
{
    unsigned long long _type;
    long long _state;
    NSSet *_layoutRects;
    struct CGRect _initialRect;
}

+ (id)layoutItemWithRect:(struct CGRect)arg1 contentType:(unsigned long long)arg2;
@property(retain, nonatomic) NSSet *layoutRects; // @synthesize layoutRects=_layoutRects;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescription;
@property(readonly, nonatomic) struct CGRect rect;
@property(readonly, nonatomic) NSValue *rectValue;

@end
