//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSDictionary, NSString, NSUUID;

@protocol NWNetworkAgent
+ (id)agentFromData:(NSData *)arg1;
+ (NSString *)agentType;
+ (NSString *)agentDomain;
@property(nonatomic, getter=isVoluntary) BOOL voluntary;
@property(nonatomic, getter=isUserActivated) BOOL userActivated;
@property(nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property(nonatomic, getter=isActive) BOOL active;
@property(copy, nonatomic) NSUUID *agentUUID;
@property(copy, nonatomic) NSString *agentDescription;
- (NSData *)copyAgentData;

@optional
@property(nonatomic) BOOL requiresAssert;
@property(nonatomic) BOOL supportsBrowseRequests;
@property(nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property(nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property(nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
- (void)closeNexusWithOptions:(NSDictionary *)arg1;
- (BOOL)requestNexusWithOptions:(NSDictionary *)arg1;
- (void)unassertAgentWithOptions:(NSDictionary *)arg1;
- (BOOL)assertAgentWithOptions:(NSDictionary *)arg1;
- (BOOL)startAgentWithOptions:(NSDictionary *)arg1;
@end

