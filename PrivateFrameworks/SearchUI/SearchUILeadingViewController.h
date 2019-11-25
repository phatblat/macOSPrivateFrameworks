//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SearchUIDetailedRowComponent.h"

@class NSString, NSView, SearchUIDetailedRowModel;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent>
{
    SearchUIDetailedRowModel *rowModel;
    id <SearchUIFeedbackDelegate> feedbackDelegate;
    NSView *_view;
}

+ (BOOL)supportsRowModel:(id)arg1;
+ (Class)leadingViewClassForRowModel:(id)arg1;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <SearchUIFeedbackDelegate> feedbackDelegate; // @synthesize feedbackDelegate;
@property(retain, nonatomic) SearchUIDetailedRowModel *rowModel; // @synthesize rowModel;
- (void).cxx_destruct;
- (void)forceVerticalCenteringOfContents;
- (void)updateWithContacts:(id)arg1;
- (id)imageView;
@property(readonly) unsigned long long type;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;
- (void)hide;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

