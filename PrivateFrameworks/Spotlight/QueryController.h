//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PARResultFactory.h"
#import "PRSSessionController.h"

@class NSArray, NSDictionary, NSString;

@interface QueryController : NSObject <PRSSessionController, PARResultFactory>
{
    NSString *_userId;
    double _gSessionStartTime;
    NSDictionary *_cep_server_values;
}

+ (void)initialize;
@property(retain) NSDictionary *cep_server_values; // @synthesize cep_server_values=_cep_server_values;
@property double gSessionStartTime; // @synthesize gSessionStartTime=_gSessionStartTime;
- (void).cxx_destruct;
- (id)supportedDomainIdentifiers;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic) double sessionStartTime;
- (void)setCepServerValues:(id)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;
- (id)init;
@property(readonly, nonatomic) NSString *applicationNameForUserAgent;
- (id)createResultObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *excludedDomainIdentifiers;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

