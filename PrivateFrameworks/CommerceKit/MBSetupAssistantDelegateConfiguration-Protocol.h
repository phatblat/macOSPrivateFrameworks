//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ACAccount, ACDAccountStore, NSDictionary, NSString;

@protocol MBSetupAssistantDelegateConfiguration
- (NSDictionary *)delegateSetupRequest;
- (NSString *)delegateIdentifier;

@optional
- (void)updatePropertiesForAccount:(ACAccount *)arg1 store:(ACDAccountStore *)arg2 handler:(void (^)(BOOL, NSError *))arg3;
- (void)completeSetupWithResponse:(NSDictionary *)arg1 account:(ACAccount *)arg2 store:(ACDAccountStore *)arg3 context:(long long)arg4 handler:(void (^)(BOOL, NSError *))arg5;
- (void)completeSetupWithResponse:(NSDictionary *)arg1 account:(ACAccount *)arg2 store:(ACDAccountStore *)arg3 handler:(void (^)(BOOL, NSError *))arg4;
- (void)terminateSetupCompletion;
- (NSString *)delegateAccountInformation;
- (void)completeSetupWithResponse:(NSDictionary *)arg1 context:(long long)arg2 handler:(void (^)(BOOL, NSError *))arg3;
- (void)completeSetupWithResponse:(NSDictionary *)arg1 handler:(void (^)(BOOL, NSError *))arg2;
@end

