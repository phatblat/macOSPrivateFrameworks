//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

@class LUI2UserView;

@interface LUI2UserViewController : LUI2ViewController
{
    BOOL _usesVisualEffectBackgroundUserViewInternal;
    LUI2UserView *_userView;
}

@property BOOL usesVisualEffectBackgroundUserViewInternal; // @synthesize usesVisualEffectBackgroundUserViewInternal=_usesVisualEffectBackgroundUserViewInternal;
@property(retain) LUI2UserView *userView; // @synthesize userView=_userView;
- (void)dealloc;
- (void)viewDidLoad;
@property BOOL usesVisualEffectBackgroundUserView;
- (void)_createUserView;

@end

