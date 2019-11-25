//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalUIReminderDatePickerTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class CalUIGadgetViewTouchBar, CalUIReminderDatePickerTouchBar, EKReminder, NSButton, NSCustomTouchBarItem, NSGroupTouchBarItem, NSPopoverTouchBarItem, NSString, NSTouchBar;

@interface CalUIReminderViewTouchBar : NSObject <CalUIReminderDatePickerTouchBarDelegate, NSTouchBarProvider>
{
    EKReminder *_reminder;
    id <CalUIReminderViewTouchBarDelegate> _delegate;
    NSTouchBar *_touchBar;
    NSCustomTouchBarItem *_doneButtonTouchBarItem;
    NSButton *_reminderNewButton;
    NSButton *_reminderCompleteButton;
    NSButton *_reminderInspectorButton;
    NSGroupTouchBarItem *_inspectorFieldsTouchBarItem;
    NSPopoverTouchBarItem *_reminderTimePopoverTouchBarItem;
    NSPopoverTouchBarItem *_locationPopoverTouchBarItem;
    CalUIReminderDatePickerTouchBar *_datePickerTouchBar;
    CalUIGadgetViewTouchBar *_datePickerGadgetViewTouchBar;
    CalUIGadgetViewTouchBar *_locationGadgetViewTouchBar;
    NSButton *_timeButton;
    NSButton *_locationButton;
}

@property(retain) NSButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain) NSButton *timeButton; // @synthesize timeButton=_timeButton;
@property(retain) CalUIGadgetViewTouchBar *locationGadgetViewTouchBar; // @synthesize locationGadgetViewTouchBar=_locationGadgetViewTouchBar;
@property(retain) CalUIGadgetViewTouchBar *datePickerGadgetViewTouchBar; // @synthesize datePickerGadgetViewTouchBar=_datePickerGadgetViewTouchBar;
@property(retain) CalUIReminderDatePickerTouchBar *datePickerTouchBar; // @synthesize datePickerTouchBar=_datePickerTouchBar;
@property(retain) NSPopoverTouchBarItem *locationPopoverTouchBarItem; // @synthesize locationPopoverTouchBarItem=_locationPopoverTouchBarItem;
@property(retain) NSPopoverTouchBarItem *reminderTimePopoverTouchBarItem; // @synthesize reminderTimePopoverTouchBarItem=_reminderTimePopoverTouchBarItem;
@property(retain) NSGroupTouchBarItem *inspectorFieldsTouchBarItem; // @synthesize inspectorFieldsTouchBarItem=_inspectorFieldsTouchBarItem;
@property(retain) NSButton *reminderInspectorButton; // @synthesize reminderInspectorButton=_reminderInspectorButton;
@property(retain) NSButton *reminderCompleteButton; // @synthesize reminderCompleteButton=_reminderCompleteButton;
@property(retain) NSButton *reminderNewButton; // @synthesize reminderNewButton=_reminderNewButton;
@property(retain) NSCustomTouchBarItem *doneButtonTouchBarItem; // @synthesize doneButtonTouchBarItem=_doneButtonTouchBarItem;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <CalUIReminderViewTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKReminder *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (void)reminderDateChanged;
- (void)reminderDateIsChanging;
- (void)dismissAllPopovers;
- (void)showLocationPopover;
- (void)showDateTimePopover;
- (void)updateReminderCompletion:(BOOL)arg1;
- (void)updateReminderNew:(BOOL)arg1;
- (void)_updateTouchBarIdentifiers;
- (void)updateTouchBar;
- (id)createInspectorFieldsTouchBarItem;
- (id)createLocationGadgetViewTouchBar;
- (id)createDatePickerGadgetViewTouchBar;
- (id)createReminderInspectorButton;
- (id)createReminderCompleteButton;
- (id)createReminderNewButton;
- (id)createDatePickerTouchBar;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

