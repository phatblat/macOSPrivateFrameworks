//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCCoding.h"

@class NSString;

@interface BSCornerRadiusConfiguration : NSObject <BSXPCCoding>
{
    double _topLeft;
    double _bottomLeft;
    double _bottomRight;
    double _topRight;
}

@property(nonatomic) double topRight; // @synthesize topRight=_topRight;
@property(nonatomic) double bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) double bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) double topLeft; // @synthesize topLeft=_topLeft;
@property(readonly, copy) NSString *description;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
@property(readonly, nonatomic) BOOL isCongruent;
- (id)initWithTopLeft:(double)arg1 bottomLeft:(double)arg2 bottomRight:(double)arg3 topRight:(double)arg4;
- (id)initWithCornerRadius:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

