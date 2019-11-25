//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"

@class FBSSceneClientSettings, NSString;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding>
{
    NSString *_identifier;
    FBSSceneClientSettings *_initialClientSettings;
}

+ (BOOL)supportsBSXPCSecureCoding;
@property(copy, nonatomic) FBSSceneClientSettings *initialClientSettings; // @synthesize initialClientSettings=_initialClientSettings;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

