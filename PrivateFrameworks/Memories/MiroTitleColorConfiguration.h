//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/MiroColorConfiguration.h>

#import "MiroTitleColorConfiguration.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MiroTitleColorConfiguration : MiroColorConfiguration <MiroTitleColorConfiguration>
{
    int _snapshotAspect;
    NSDictionary *_titleParameters;
    NSString *_debugTitleName;
}

+ (id)titleColorConfigurationWithTitleStyleID:(id)arg1 snapshotAspect:(int)arg2 randomizerSeed:(unsigned int)arg3;
+ (void)initialize;
@property(retain, nonatomic) NSString *debugTitleName; // @synthesize debugTitleName=_debugTitleName;
@property(retain, nonatomic) NSDictionary *titleParameters; // @synthesize titleParameters=_titleParameters;
@property(nonatomic) int snapshotAspect; // @synthesize snapshotAspect=_snapshotAspect;
- (void).cxx_destruct;
- (BOOL)_verifyTitleStylesAreCorrect:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL titleStyleIsSideBySide;
@property(readonly, nonatomic) BOOL titleStyleIsLowerThird;
@property(readonly, nonatomic) BOOL titleStyleIsCentered;
@property(readonly, nonatomic) BOOL titleStyleHasStrap;
@property(readonly, nonatomic) BOOL titleStyleHasColorRigging;
@property(readonly, nonatomic) unsigned long long backgroundShapeColorTreatment;
@property(readonly, nonatomic) unsigned long long subtitleColorTreatment;
@property(readonly, nonatomic) unsigned long long titleColorTreatment;
- (id)initWithTitleStyleID:(id)arg1 randomizerSeed:(unsigned int)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

