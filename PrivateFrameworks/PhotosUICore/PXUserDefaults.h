//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber;

@interface PXUserDefaults : NSObject
{
    NSDate *_allPhotosColumnsDate;
    NSNumber *_allPhotosColumns;
    double _defaultUserInterfaceTimeoutDuration;
    NSNumber *_curatedLibraryZoomLevel;
    NSNumber *_daysMarginScale;
    NSNumber *_allPhotosPreferredIndividualItemsColumns;
    NSNumber *_allPhotosAspectFit;
    NSNumber *_allPhotosCaptionsVisible;
    NSNumber *_didShowCurationFooter;
    NSNumber *_didShowCompletedCurationFooterAnimation;
    id <PXUserDefaultsDataSource> _dataSource;
}

+ (id)standardUserDefaults;
@property(readonly, nonatomic) __weak id <PXUserDefaultsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSNumber *didShowCompletedCurationFooterAnimation; // @synthesize didShowCompletedCurationFooterAnimation=_didShowCompletedCurationFooterAnimation;
@property(copy, nonatomic) NSNumber *didShowCurationFooter; // @synthesize didShowCurationFooter=_didShowCurationFooter;
@property(copy, nonatomic) NSNumber *allPhotosCaptionsVisible; // @synthesize allPhotosCaptionsVisible=_allPhotosCaptionsVisible;
@property(copy, nonatomic) NSNumber *allPhotosAspectFit; // @synthesize allPhotosAspectFit=_allPhotosAspectFit;
@property(copy, nonatomic) NSNumber *allPhotosPreferredIndividualItemsColumns; // @synthesize allPhotosPreferredIndividualItemsColumns=_allPhotosPreferredIndividualItemsColumns;
@property(copy, nonatomic) NSNumber *daysMarginScale; // @synthesize daysMarginScale=_daysMarginScale;
@property(copy, nonatomic) NSNumber *curatedLibraryZoomLevel; // @synthesize curatedLibraryZoomLevel=_curatedLibraryZoomLevel;
@property(readonly, nonatomic) double defaultUserInterfaceTimeoutDuration; // @synthesize defaultUserInterfaceTimeoutDuration=_defaultUserInterfaceTimeoutDuration;
- (void).cxx_destruct;
- (BOOL)_isDateStillValid:(id)arg1;
@property(copy, nonatomic) NSNumber *allPhotosColumns; // @synthesize allPhotosColumns=_allPhotosColumns;
- (id)initWithDataSource:(id)arg1;
- (id)init;

@end
