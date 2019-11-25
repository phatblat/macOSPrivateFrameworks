//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOCityPickerView, IGPopupWindowController, NSArray, NSComboBox, NSWindow;

@interface CalUITimeZoneCityPickerController : NSObject
{
    NSWindow *tzPanel;
    GEOCityPickerView *tzView;
    NSComboBox *_comboBox;
    IGPopupWindowController *_popup;
    NSArray *_topLevelObjects;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *topLevelObjects; // @synthesize topLevelObjects=_topLevelObjects;
- (void).cxx_destruct;
- (void)clearDelegates;
- (BOOL)popupOnView:(id)arg1;
- (id)popup;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (id)timeZone;
- (void)_bootstrapUI;

@end

