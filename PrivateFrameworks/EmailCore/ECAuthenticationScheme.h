//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ECAuthenticationScheme : NSObject
{
}

+ (id)authenticationSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (id)schemeWithName:(id)arg1;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)knownSchemes;
+ (void)initialize;
@property(readonly, nonatomic) NSString *humanReadableName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL requiresPassword;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
@property(readonly, nonatomic) BOOL hasEncryption;
- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)arg1;

@end
