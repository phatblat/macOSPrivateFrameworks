//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/WFStorageServiceAction.h>

@interface WFSaveFileAction : WFStorageServiceAction
{
    id <WFFileStorageServiceOperation> _saveOperation;
}

@property(retain, nonatomic) id <WFFileStorageServiceOperation> saveOperation; // @synthesize saveOperation=_saveOperation;
- (void).cxx_destruct;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (id)showPickerKey;
- (id)filePathKey;
- (void)finishRunningWithError:(id)arg1;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end
