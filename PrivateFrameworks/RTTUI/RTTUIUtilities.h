//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface RTTUIUtilities : NSObject
{
    BOOL _inUnitTestMode;
    BOOL _headphoneJackSupportsTTY;
    NSObject<OS_dispatch_queue> *_callCenterQueue;
}

+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)flipImageHorizontally:(id)arg1;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)arg1;
+ (id)phoneNumberStringFromString:(id)arg1;
+ (id)ASCIINumericStringFromString:(struct __CFString *)arg1;
+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)softwareTTYIsSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)isRTTSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (void)contactIsTTYContact:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (BOOL)contactIsTTYContact:(id)arg1;
+ (id)sharedUtilityProvider;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue; // @synthesize callCenterQueue=_callCenterQueue;
@property(nonatomic) BOOL headphoneJackSupportsTTY; // @synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY;
@property(nonatomic) BOOL inUnitTestMode; // @synthesize inUnitTestMode=_inUnitTestMode;
- (void).cxx_destruct;
- (id)transcriptStringForConversation:(id)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (id)bubbleFillForMe:(BOOL)arg1;
- (id)tintedTTYIcon;
- (id)ttyIconWithTint:(id)arg1;
- (id)largeTTYIconWithTint:(id)arg1;
- (id)bubbleColorForMe:(BOOL)arg1;
- (struct CGSize)bubbleInsetForMe:(BOOL)arg1;
- (struct CGSize)textInsetForMe:(BOOL)arg1;
- (unsigned long long)textAlignmentForMe:(BOOL)arg1;
- (id)ttyMeContact;
- (id)myPhoneNumber;
- (id)init;
- (unsigned long long)currentPreferredTransportMethod;

@end

