//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MarkupViewController.h"

@class NSURL;

@interface QLMarkupViewController : MarkupViewController
{
    BOOL _isDirty;
    id <QLMarkupViewControllerDelegate> _delegate;
    NSURL *_originalURL;
}

@property(retain) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property BOOL isDirty; // @synthesize isDirty=_isDirty;
@property __weak id <QLMarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)saveEditing;
- (void)setFileURL:(id)arg1 withArchivedModelData:(id)arg2 preloadedView:(id)arg3;
- (struct CGRect)positioningRectForCandidatePickerForContentViewController:(id)arg1;
- (void)editDetectedForAnnotationController:(id)arg1;

@end

