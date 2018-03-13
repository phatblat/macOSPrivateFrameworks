//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACFMessage, ACFPrincipal, NSData, NSDictionary, NSNumber, NSString;

@protocol ACCTicketManagerProtocol <NSObject>
- (void)updateContextWithClientSecretIfAny:(id <ACCAuthContextProtocol>)arg1;
- (NSString *)serviceTicketStringWithRequest:(ACFMessage *)arg1 ssoToken:(id <ACCSSOTokenProtocol>)arg2;
- (id <ACCAuthContextProtocol>)changePasswordContextWithRequest:(ACFMessage *)arg1 oldPassword:(NSString *)arg2 newPassword:(NSString *)arg3;
- (id <ACCSSOTokenProtocol>)fetchSSOTokenForPrincipal:(ACFPrincipal *)arg1 agedLessThan:(double)arg2;
- (id <ACCSSOTokenProtocol>)fetchSSOTokenForPrincipal:(ACFPrincipal *)arg1;
- (BOOL)storeSSOToken:(id <ACCSSOTokenProtocol>)arg1;
- (id <ACCSSOTokenProtocol>)createSSOTokenWithContent:(NSData *)arg1 context:(id <ACCAuthContextProtocol>)arg2;
- (NSData *)decryptEncryptedContent:(NSData *)arg1 withHmac:(NSString *)arg2 context:(id <ACCAuthContextProtocol>)arg3;
- (id <ACCAuthContextProtocol>)authContextWithRequest:(ACFMessage *)arg1 sessionToken:(NSString *)arg2;
- (id <ACCAuthContextProtocol>)authContextWithRequest:(ACFMessage *)arg1 keyCode:(NSString *)arg2 authenticationType:(NSNumber *)arg3;
- (id <ACCAuthContextProtocol>)authContextWithRequest:(ACFMessage *)arg1;
- (NSDictionary *)envelopeWithContext:(id <ACCAuthContextProtocol>)arg1;
- (void)uninstallPublicKeyForRealm:(NSString *)arg1;
- (BOOL)installCertificateWithString:(NSString *)arg1 version:(NSString *)arg2 forRealm:(NSString *)arg3;
@end

