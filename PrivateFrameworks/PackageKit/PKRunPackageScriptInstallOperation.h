//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class NSString, PKPackageSpecifier;

@interface PKRunPackageScriptInstallOperation : PKInstallOperation
{
    NSString *_scriptType;
    PKPackageSpecifier *_currentPackageSpecifier;
    unsigned int _original_bootstrap_port;
    unsigned int _original_security_session_port;
}

+ (id)_sanitizeEnvironment:(id)arg1;
- (void)main;
- (BOOL)_shouldSkipScriptForPackageSpecifier:(id)arg1;
- (SEL)_scriptPathSelectorForPackage:(id)arg1 returningScriptName:(id *)arg2;
- (int)_runPackageScript:(id)arg1 packageSpecifier:(id)arg2 component:(id)arg3 scriptName:(id)arg4 error:(id *)arg5;
- (void)_restoreContext;
- (void)_switchToUserContext;
- (id)_scriptTaskEnvironmentForPackage:(id)arg1 destination:(id)arg2 scriptName:(id)arg3;
- (id)messageTracerComment;
- (id)messageTracerDomain;
- (id)currentPackageSpecifier;
- (int)installState;
- (id)description;
- (void)dealloc;
- (id)initForScriptType:(id)arg1 request:(id)arg2 sandbox:(id)arg3 analyzer:(id)arg4;

@end

