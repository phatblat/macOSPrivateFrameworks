//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKOverlayableWebServiceRequest.h>

@interface PKPaymentWebServiceRequest : PKOverlayableWebServiceRequest
{
    id <PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
}

@property(retain, nonatomic) id <PKPaymentWebServiceTargetDeviceProtocol> targetDevice; // @synthesize targetDevice=_targetDevice;
- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 version:(id)arg2 endpointComponents:(id)arg3 queryParameters:(id)arg4 appleAccountInformation:(id)arg5;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 appleAccountInformation:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (void)_signRequest:(id)arg1 webService:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

