//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class IACastleIconView, MMService, NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSTextField;

@interface IACastleServiceRow : NSTableRowView
{
    NSButton *_enableButton;
    IACastleIconView *_iconView;
    NSImageView *_betaImageView;
    NSTextField *_nameField;
    NSTextField *_nameFieldAlt;
    NSTextField *_statusField;
    NSTextField *_progressField;
    NSProgressIndicator *_spinner;
    NSProgressIndicator *_determineStatusSpinner;
    NSButton *_optionsButton;
    NSLayoutConstraint *_progressSmallServiceSpacer;
    NSLayoutConstraint *_progressLargeServiceSpacer;
    MMService *_service;
    BOOL _isRowEnabled;
    double _spinnerStopTime;
    double _determineStatusSpinnerStopTime;
}

+ (id)createFromNib;
@property(setter=setRowEnabled:) BOOL isRowEnabled; // @synthesize isRowEnabled=_isRowEnabled;
@property(retain, nonatomic) MMService *service; // @synthesize service=_service;
- (BOOL)isFlipped;
- (void)optionsButtonPressed:(id)arg1;
- (void)enableServicePressed:(id)arg1;
- (void)update;
- (void)doUpdate:(id)arg1;
- (void)stopDetermineStatusSpinner:(id)arg1;
- (void)stopSpinner:(id)arg1;
- (void)updateOptionsButton;
- (BOOL)isRTL;

@end

