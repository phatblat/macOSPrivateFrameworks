//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UserProtectedConfig : NSObject
{
    int _unlockEnabled;
    int _identificationEnabled;
    int _loginEnabled;
    int _applePayEnabled;
    int _attentionDetectionEnabled;
}

@property(nonatomic) int attentionDetectionEnabled; // @synthesize attentionDetectionEnabled=_attentionDetectionEnabled;
@property(nonatomic) int applePayEnabled; // @synthesize applePayEnabled=_applePayEnabled;
@property(nonatomic) int loginEnabled; // @synthesize loginEnabled=_loginEnabled;
@property(nonatomic) int identificationEnabled; // @synthesize identificationEnabled=_identificationEnabled;
@property(nonatomic) int unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
- (id)init;

@end
