//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSURLAction, AMSURLRequestProperties, NSError, NSMutableData, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

__attribute__((visibility("hidden")))
@interface AMSURLTaskInfo : NSObject
{
    AMSURLAction *_receivedAction;
    NSMutableData *_data;
    NSError *_error;
    NSURLSessionTaskMetrics *_metrics;
    AMSURLRequestProperties *_properties;
    NSURLResponse *_response;
    NSURLSessionTask *_task;
    CDUnknownBlockType _completionBlock;
}

+ (id)sharedTaskQueue;
+ (id)sharedTaskStore;
+ (void)removeTaskInfoForTask:(id)arg1;
+ (id)createTaskInfoForTask:(id)arg1;
+ (id)taskInfoForTask:(id)arg1;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) NSURLSessionTask *task; // @synthesize task=_task;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(retain) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(retain) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) AMSURLAction *receivedAction; // @synthesize receivedAction=_receivedAction;
- (void).cxx_destruct;
- (id)initWithTask:(id)arg1;

@end

