//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MRHyperGridIteration : NSObject
{
    unsigned char layout;
    unsigned char slideCount;
    unsigned char slideIndex[3];
    long long direction;
    long long index;
    double duration;
    long long panoCount;
    double panoDurations[3];
    double startTime;
    BOOL hasBreak;
}

+ (CDStruct_7b508128 *)poolInfo;
- (id)description;
- (void)setLayout:(unsigned char)arg1;

@end

