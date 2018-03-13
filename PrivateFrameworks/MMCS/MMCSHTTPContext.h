//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "C2RequestDelegate.h"
#import "NSStreamDelegate.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDataDelegatePrivate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"
#import "NSURLSessionTaskDelegatePrivate.h"

@class MMCSBoundedQueue, NSDictionary, NSInputStream, NSOutputStream, NSString, NSURLSession, NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface MMCSHTTPContext : NSObject <C2RequestDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegatePrivate, NSStreamDelegate>
{
    BOOL _didOpen;
    BOOL _isValid;
    BOOL _isTaskDone;
    BOOL _requestIsStreamed;
    BOOL _isHandlingError;
    // Error parsing type: ^{mmcs_http_context={_C3Base={__CFRuntimeBase=QAQ}}i{_Metricsinfo__HTTPMetricsInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}*iiiiidididddqqiqQQidiqiqI^{_Chunkserver__ErrorResponse}idid}^{__CFString}qddCCCCCi^{__CFUUID}dd^{__CFError}^{__CFHTTPMessage}CQ^{_mmcs_http_request_options}dd^{__CFHTTPMessage}C^{__CFData}C^{__sFILE}^{__sFILE}{_Metricsinfo__SocketInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}**Ii}^{mmcs_metrics_http_info}^?^?^?^?^?^?^?^?^v^v^{os_activity_s}^{voucher_s}^{mmcs_read_stream_pool}^{__CFRunLoop}^{__CFArray}(?=^{mmcs_cfnetwork_http_context}^{mmcs_nsurlsession_http_context}^{mmcs_curl_http_context}^v)}, name: _hc
    NSURLSession *_urlSession;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSURLSessionDataTask *_dataTask;
    MMCSBoundedQueue *_boundedQueue;
    NSDictionary *_timingData;
    struct os_activity_s *_activityMarker;
}

@property(nonatomic) struct os_activity_s *activityMarker; // @synthesize activityMarker=_activityMarker;
@property(nonatomic) BOOL isHandlingError; // @synthesize isHandlingError=_isHandlingError;
@property(nonatomic) BOOL requestIsStreamed; // @synthesize requestIsStreamed=_requestIsStreamed;
@property(nonatomic) BOOL isTaskDone; // @synthesize isTaskDone=_isTaskDone;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(nonatomic) BOOL didOpen; // @synthesize didOpen=_didOpen;
@property(retain, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;
@property(retain, nonatomic) MMCSBoundedQueue *boundedQueue; // @synthesize boundedQueue=_boundedQueue;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
// Error parsing type for property hc:
// Property attributes: T^{mmcs_http_context={_C3Base={__CFRuntimeBase=QAQ}}i{_Metricsinfo__HTTPMetricsInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}*iiiiidididddqqiqQQidiqiqI^{_Chunkserver__ErrorResponse}idid}^{__CFString}qddCCCCCi^{__CFUUID}dd^{__CFError}^{__CFHTTPMessage}CQ^{_mmcs_http_request_options}dd^{__CFHTTPMessage}C^{__CFData}C^{__sFILE}^{__sFILE}{_Metricsinfo__SocketInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}**Ii}^{mmcs_metrics_http_info}^?^?^?^?^?^?^?^?^v^v^{os_activity_s}^{voucher_s}^{mmcs_read_stream_pool}^{__CFRunLoop}^{__CFArray}(?=^{mmcs_cfnetwork_http_context}^{mmcs_nsurlsession_http_context}^{mmcs_curl_http_context}^v)},N,V_hc

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3;
- (void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)invalidate;
- (void)cleanupResponse;
- (void)cleanupRequest;
- (void)dealloc;
- (BOOL)send;
-     // Error parsing type: @40@0:8^{mmcs_http_context={_C3Base={__CFRuntimeBase=QAQ}}i{_Metricsinfo__HTTPMetricsInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}*iiiiidididddqqiqQQidiqiqI^{_Chunkserver__ErrorResponse}idid}^{__CFString}qddCCCCCi^{__CFUUID}dd^{__CFError}^{__CFHTTPMessage}CQ^{_mmcs_http_request_options}dd^{__CFHTTPMessage}C^{__CFData}C^{__sFILE}^{__sFILE}{_Metricsinfo__SocketInfo={_ProtobufCMessage=^{_ProtobufCMessageDescriptor}I^{_ProtobufCMessageUnknownField}}**Ii}^{mmcs_metrics_http_info}^?^?^?^?^?^?^?^?^v^v^{os_activity_s}^{voucher_s}^{mmcs_read_stream_pool}^{__CFRunLoop}^{__CFArray}(?=^{mmcs_cfnetwork_http_context}^{mmcs_nsurlsession_http_context}^{mmcs_curl_http_context}^v)}16r^{mmcs_http_context_options=^{__CFString}^{__CFHTTPMessage}^{_mmcs_http_request_options}ddQ^?^?^?^?^?^?^v^?^vCd^{os_activity_s}}24^{os_activity_s=}32, name: initWithContext:options:activityMarker:
- (BOOL)createNewRequestBodyInputStream;
- (long long)countOfRequestBodyBytesSent;
- (BOOL)requestBodyCanAcceptData;
- (void)invalidateStreamPair;
@property(readonly, copy) NSString *description;
- (void)requestBodyDone;
- (long long)writeRequestBody:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

