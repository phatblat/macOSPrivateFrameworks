//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OADCountedGraphicFeature : NSObject
{
    id mFeature;
    unsigned long long mUsageCount;
}

@property(nonatomic) unsigned long long usageCount; // @synthesize usageCount=mUsageCount;
- (void).cxx_destruct;
- (long long)compareUsageCount:(id)arg1;
- (void)incrementUsageCount;
- (id)feature;
- (void)dealloc;
- (id)initWithFeature:(id)arg1;

@end
