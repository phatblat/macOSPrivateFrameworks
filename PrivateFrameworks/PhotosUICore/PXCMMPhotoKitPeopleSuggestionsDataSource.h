//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSource.h>

@class NSObject<OS_dispatch_queue>, PXCMMPhotoKitPeopleSuggestionsDataSourceState;

@interface PXCMMPhotoKitPeopleSuggestionsDataSource : PXCMMPeopleSuggestionsDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
}

@property(readonly, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end

