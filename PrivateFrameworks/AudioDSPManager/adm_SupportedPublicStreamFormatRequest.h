//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "dspd_SupportedPublicStreamFormatRequest.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface adm_SupportedPublicStreamFormatRequest : NSObject <NSSecureCoding, dspd_SupportedPublicStreamFormatRequest>
{
    struct unique_ptr<dspd::StreamDescription, std::__1::default_delete<dspd::StreamDescription>> _streamDescriptionPtr;
    vector_66ffd461 _portDescriptions;
    struct DeviceDescription deviceDescription;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) vector_66ffd461 portDescriptions; // @synthesize portDescriptions=_portDescriptions;
@property(nonatomic) struct DeviceDescription deviceDescription; // @synthesize deviceDescription;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) struct StreamDescription streamDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
