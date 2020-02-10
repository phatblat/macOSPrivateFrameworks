//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHCalendarCell.h>

@class NSDate, NSLock;

@interface KHCalendarMonthPreviewCell : KHCalendarCell
{
    NSDate *_calendarDate;
    NSLock *_cachedDocumentLock;
    struct CGPDFDocument *_cachedDocument;
}

- (void)_cachePDFPreviewInRect:(struct CGRect)arg1 environment:(id)arg2;
- (void)fillCellContentInContext:(struct CGContext *)arg1 environment:(id)arg2 scale:(double)arg3;
- (BOOL)drawsPhotoFrame;
- (BOOL)drawsContentFrame;
- (BOOL)drawsDateFrame;
- (void)setCalendarDate:(id)arg1;
- (id)calendarDate;
- (void)dealloc;
- (id)init;

@end
