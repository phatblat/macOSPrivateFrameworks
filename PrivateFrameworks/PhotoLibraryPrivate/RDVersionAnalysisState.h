//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSDate, NSString, RDVersionAnalysisStateTable;

@interface RDVersionAnalysisState : RDModel
{
}

+ (Class)tableClass;
@property(nonatomic) long long workerFlags;
@property(copy, nonatomic) NSDate *ignoreUntilDate;
@property(copy, nonatomic) NSDate *lastIgnoredDate;
@property(nonatomic) long long analysisState;
@property(nonatomic) long long workerType;
@property(copy, nonatomic) NSString *versionUuid;
@property(nonatomic) long long versionId;
@property(readonly, nonatomic) RDVersionAnalysisStateTable *table;

@end

