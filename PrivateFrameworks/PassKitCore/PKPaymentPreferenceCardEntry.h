//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PKPaymentApplication, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentPreferenceCardEntry : NSObject
{
    BOOL _shouldShowCardUI;
    BOOL _isSelectable;
    PKPaymentPass *_pass;
    PKRemotePaymentInstrument *_remotePaymentInstrument;
    PKPaymentApplication *_paymentApplication;
    NSString *_displayName;
    NSString *_availabilityString;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) BOOL shouldShowCardUI; // @synthesize shouldShowCardUI=_shouldShowCardUI;
@property(copy, nonatomic) NSString *availabilityString; // @synthesize availabilityString=_availabilityString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // @synthesize remotePaymentInstrument=_remotePaymentInstrument;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;

@end

