//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSURL, PKPaymentSetupViewController;

@interface PKPaymentCardIneligibleViewController : NSViewController
{
    long long _reason;
    long long _context;
    PKPaymentSetupViewController *_setupVC;
    id <PKPaymentSetupDelegate> _setupDelegate;
    NSURL *_learnMoreURL;
}

@property(retain, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(nonatomic) __weak id <PKPaymentSetupDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(nonatomic) __weak PKPaymentSetupViewController *setupVC; // @synthesize setupVC=_setupVC;
@property(nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)beginSheetInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

