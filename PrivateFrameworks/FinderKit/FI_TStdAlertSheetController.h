//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface FI_TStdAlertSheetController : NSObject
{
    struct TNSRef<id<TStdAlertSheetClientProtocol>, void> _client;
    function_b1fce659 _notifySuppression;
}

+ (void)stdAlertSheetWithClient:(id)arg1 parentWindow:(id)arg2 mainText:(id)arg3 subText:(id)arg4 okStr:(id)arg5 cancelStr:(id)arg6 otherStr:(id)arg7 alertStyle:(unsigned long long)arg8 defaultButton:(int)arg9 showSuppressionButton:(_Bool)arg10 suppressionButtonTitle:(const struct TString *)arg11 notifySuppression:(function_b1fce659)arg12;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;

@end

