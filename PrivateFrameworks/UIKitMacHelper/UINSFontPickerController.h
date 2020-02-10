//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINSFontPickerController.h"

@class NSArray, NSMenu, NSString;

__attribute__((visibility("hidden")))
@interface UINSFontPickerController : NSObject <UINSFontPickerController>
{
    NSArray *_recentFamilies;
    Class _infoClass;
    id <UINSFontPickerControllerConfiguration> _configuration;
    id <UINSFontPickerInfo> _selectedFontInfo;
    NSMenu *_menu;
    id <UINSFontPickerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <UINSFontPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectedFont:(struct __CTFontDescriptor *)arg1;
- (void)presentAtLocation:(struct CGPoint)arg1 inWindow:(id)arg2;
- (void)_selectFont:(id)arg1;
- (void)presentAtLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (id)initWithInfoClass:(Class)arg1 configuration:(id)arg2;
- (void)_loadFonts;
- (id)_menuInfoForFamily:(id)arg1;
- (void)_populateFacesForMenuItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
