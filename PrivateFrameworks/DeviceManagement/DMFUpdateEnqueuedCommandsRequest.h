//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSString;

@interface DMFUpdateEnqueuedCommandsRequest : DMFTaskRequest
{
    NSString *_organizationIdentifier;
    NSArray *_addCommands;
    NSArray *_removeCommands;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSArray *removeCommands; // @synthesize removeCommands=_removeCommands;
@property(copy, nonatomic) NSArray *addCommands; // @synthesize addCommands=_addCommands;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

