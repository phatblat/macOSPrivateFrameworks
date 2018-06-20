//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SACountedTreeNode : NSObject
{
    unsigned long long _sampleCount;
    unsigned long long _startSampleIndex;
}

+ (id)stackNodeWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2;
@property unsigned long long startSampleIndex; // @synthesize startSampleIndex=_startSampleIndex;
@property unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
- (id)initWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2;

@end
