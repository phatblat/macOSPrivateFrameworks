//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface PIEPhotoDateRange : NSObject
{
    id <KHPhotoInfoProtocol> _earliestPhoto;
    id <KHPhotoInfoProtocol> _latestPhoto;
    NSDate *_averagePhotoDate;
}

+ (id)dateRangeFromPhotos:(id)arg1;
@property(readonly) NSDate *averagePhotoDate; // @synthesize averagePhotoDate=_averagePhotoDate;
@property(readonly) id <KHPhotoInfoProtocol> latestPhoto; // @synthesize latestPhoto=_latestPhoto;
@property(readonly) id <KHPhotoInfoProtocol> earliestPhoto; // @synthesize earliestPhoto=_earliestPhoto;
- (id)description;
- (void)_calculatePhotoDatesRange:(id)arg1;
- (BOOL)emptyRange;
@property(readonly) double timespan;
@property(readonly) NSDate *latestDate;
@property(readonly) NSDate *earliestDate;
- (void)dealloc;
- (id)initWithPhotos:(id)arg1;
- (id)initWithEarliestPhoto:(id)arg1 latestPhoto:(id)arg2;

@end
