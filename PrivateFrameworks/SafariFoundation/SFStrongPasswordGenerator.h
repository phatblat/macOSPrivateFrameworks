//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBSPasswordGenerationManager;

@interface SFStrongPasswordGenerator : NSObject
{
    WBSPasswordGenerationManager *_passwordGenerationManager;
}

- (void).cxx_destruct;
- (id)generatedPasswordForAppWithAppID:(id)arg1 passwordRules:(id)arg2 confirmPasswordRules:(id)arg3;
- (id)generatedPasswordForAppWithAppID:(id)arg1 passwordRules:(id)arg2 minimumLength:(unsigned long long)arg3 maximumLength:(unsigned long long)arg4;
- (id)init;

@end

