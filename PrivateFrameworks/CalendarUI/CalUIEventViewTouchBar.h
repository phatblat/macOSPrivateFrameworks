//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalUIDatePickerTouchBarDelegate.h"
#import "NSTouchBarProvider.h"

@class CNUserActionTouchBar, CalUICalendarPickerTouchBarItemController, CalUIDatePickerTouchBar, CalUIEventViewReportJunkControl, EKEvent, NSButton, NSButtonGroupTouchBarItem, NSCustomTouchBarItem, NSLayoutConstraint, NSPopoverTouchBarItem, NSSegmentedControl, NSString, NSTouchBar;

@interface CalUIEventViewTouchBar : NSObject <CalUIDatePickerTouchBarDelegate, NSTouchBarProvider>
{
    EKEvent *_event;
    id <CalUIEventViewTouchBarDelegate> _delegate;
    NSTouchBar *_touchBar;
    NSButton *_escButton;
    NSButton *_escSecondaryButton;
    NSButton *_escWidthMeasurementButton;
    NSLayoutConstraint *_escButtonWidthConstraint;
    NSCustomTouchBarItem *_escButtonTouchBarItem;
    CalUICalendarPickerTouchBarItemController *_calendarPickerController;
    NSButton *_inspectorToggleButton;
    NSButtonGroupTouchBarItem *_inspectorFieldsTouchBarItem;
    NSPopoverTouchBarItem *_locationPopoverTouchBarItem;
    NSPopoverTouchBarItem *_eventTimePopoverTouchBarItem;
    NSPopoverTouchBarItem *_inviteesPopoverTouchBarItem;
    NSTouchBar *_locationTouchBar;
    CalUIDatePickerTouchBar *_datePickerTouchBar;
    NSTouchBar *_inviteesTouchBar;
    CNUserActionTouchBar *_userActionTouchBar;
    CalUIEventViewReportJunkControl *_reportJunkControl;
    NSSegmentedControl *_invitationResponseControl;
    NSTouchBar *_invitationReponseTouchBar;
}

+ (id)interestedChangeKeys;
@property(retain) NSTouchBar *invitationReponseTouchBar; // @synthesize invitationReponseTouchBar=_invitationReponseTouchBar;
@property(retain) NSSegmentedControl *invitationResponseControl; // @synthesize invitationResponseControl=_invitationResponseControl;
@property(retain) CalUIEventViewReportJunkControl *reportJunkControl; // @synthesize reportJunkControl=_reportJunkControl;
@property(retain) CNUserActionTouchBar *userActionTouchBar; // @synthesize userActionTouchBar=_userActionTouchBar;
@property(retain) NSTouchBar *inviteesTouchBar; // @synthesize inviteesTouchBar=_inviteesTouchBar;
@property(retain) CalUIDatePickerTouchBar *datePickerTouchBar; // @synthesize datePickerTouchBar=_datePickerTouchBar;
@property(retain) NSTouchBar *locationTouchBar; // @synthesize locationTouchBar=_locationTouchBar;
@property(retain) NSPopoverTouchBarItem *inviteesPopoverTouchBarItem; // @synthesize inviteesPopoverTouchBarItem=_inviteesPopoverTouchBarItem;
@property(retain) NSPopoverTouchBarItem *eventTimePopoverTouchBarItem; // @synthesize eventTimePopoverTouchBarItem=_eventTimePopoverTouchBarItem;
@property(retain) NSPopoverTouchBarItem *locationPopoverTouchBarItem; // @synthesize locationPopoverTouchBarItem=_locationPopoverTouchBarItem;
@property(retain) NSButtonGroupTouchBarItem *inspectorFieldsTouchBarItem; // @synthesize inspectorFieldsTouchBarItem=_inspectorFieldsTouchBarItem;
@property(retain) NSButton *inspectorToggleButton; // @synthesize inspectorToggleButton=_inspectorToggleButton;
@property(retain) CalUICalendarPickerTouchBarItemController *calendarPickerController; // @synthesize calendarPickerController=_calendarPickerController;
@property(retain) NSCustomTouchBarItem *escButtonTouchBarItem; // @synthesize escButtonTouchBarItem=_escButtonTouchBarItem;
@property(retain) NSLayoutConstraint *escButtonWidthConstraint; // @synthesize escButtonWidthConstraint=_escButtonWidthConstraint;
@property(retain) NSButton *escWidthMeasurementButton; // @synthesize escWidthMeasurementButton=_escWidthMeasurementButton;
@property(retain) NSButton *escSecondaryButton; // @synthesize escSecondaryButton=_escSecondaryButton;
@property(retain) NSButton *escButton; // @synthesize escButton=_escButton;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property __weak id <CalUIEventViewTouchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (BOOL)allDayModificationsAllowed;
- (void)datePickerAllDayChanged;
- (void)datePickerTimeChanged;
- (void)datePickerTimeIsChanging;
- (void)eventViewInvitationSelected:(id)arg1;
- (void)dismissAllPopovers;
- (void)showInviteesPopover;
- (void)showDateTimePopover;
- (void)showLocationPopover;
- (void)escButtonPressed:(id)arg1;
- (void)dateTimeFormatChanged;
- (void)_updateEventViewInvitationControl;
- (void)_updateUserActionTouchBar;
- (void)_updateReportJunkControl;
- (void)_updateEventViewInvitationResponseTouchBar;
- (void)_copyEventValuesFromDatePickerTouchBar;
- (void)_copyEventValuesToDatePickerTouchBar;
- (void)_updateDatePickerTouchBar;
- (void)_updateEscButtons;
- (void)_updateTouchBarIdentifiers;
- (BOOL)_shouldShowEscSecondaryButton;
- (BOOL)_shouldShowEscButton;
- (void)updateTouchBar;
- (BOOL)isInterestedInChanges:(id)arg1;
- (id)createInvitationReportJunkControl;
- (id)createInvitationDeleteButton;
- (id)createInvitationTouchBarItem;
- (id)_accessibilityDescriptionForParticipantStatus:(long long)arg1;
- (id)_responseImageForParticipantStatus:(long long)arg1 state:(long long)arg2;
- (id)createInvitationResponseControl;
- (id)createUserActionTouchBar;
- (id)_addButtonOrPopoverWithIdentifier:(id)arg1 popoverTouchBar:(id)arg2 title:(id)arg3 image:(id)arg4 target:(id)arg5 action:(SEL)arg6 toGroupItem:(id)arg7;
- (id)createInspectorFieldsTouchBarItem;
- (id)createDatePickerTouchBar;
- (id)createInspectorToggleButton;
- (id)createEscSecondaryButton;
- (id)createEscButton;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

