//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol MSVSegmentedSubEncoder <NSObject>
@property(readonly) NSData *encodedData;
@property(readonly, nonatomic) BOOL hasTopLevelData;
- (void)finishEncodingPartialTopLevelObject;
- (void)beginEncodingPartialTopLevelObject:(id <NSSecureCoding>)arg1;
@end

