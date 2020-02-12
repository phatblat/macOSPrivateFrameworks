//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject <NSCopying, NSSecureCoding>
{
    int _peerSupportedChannelFlags;
    unsigned long long _localMasterChannel;
    unsigned long long _localPreferredChannel;
    unsigned long long _localSecondaryPreferredChannel;
    unsigned long long _localAssistedDiscoveryMetric;
    NSString *_peerMACAddress;
    unsigned long long _peerMasterChannel;
    unsigned long long _peerPreferredChannel;
    unsigned long long _peerSecondaryPreferredChannel;
    unsigned long long _peerAssistedDiscoveryMetric;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int peerSupportedChannelFlags; // @synthesize peerSupportedChannelFlags=_peerSupportedChannelFlags;
@property(nonatomic) unsigned long long peerAssistedDiscoveryMetric; // @synthesize peerAssistedDiscoveryMetric=_peerAssistedDiscoveryMetric;
@property(nonatomic) unsigned long long peerSecondaryPreferredChannel; // @synthesize peerSecondaryPreferredChannel=_peerSecondaryPreferredChannel;
@property(nonatomic) unsigned long long peerPreferredChannel; // @synthesize peerPreferredChannel=_peerPreferredChannel;
@property(nonatomic) unsigned long long peerMasterChannel; // @synthesize peerMasterChannel=_peerMasterChannel;
@property(copy, nonatomic) NSString *peerMACAddress; // @synthesize peerMACAddress=_peerMACAddress;
@property(nonatomic) unsigned long long localAssistedDiscoveryMetric; // @synthesize localAssistedDiscoveryMetric=_localAssistedDiscoveryMetric;
@property(nonatomic) unsigned long long localSecondaryPreferredChannel; // @synthesize localSecondaryPreferredChannel=_localSecondaryPreferredChannel;
@property(nonatomic) unsigned long long localPreferredChannel; // @synthesize localPreferredChannel=_localPreferredChannel;
@property(nonatomic) unsigned long long localMasterChannel; // @synthesize localMasterChannel=_localMasterChannel;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAWDLParameters:(id)arg1;

@end
