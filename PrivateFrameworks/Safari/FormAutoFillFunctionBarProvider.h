//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/AutoFillFunctionBarProvider.h>

__attribute__((visibility("hidden")))
@interface FormAutoFillFunctionBarProvider : AutoFillFunctionBarProvider
{
}

- (void)didShowAutoFillQuickTypeForItem:(const struct CompletionListItem *)arg1;
- (id)textForCompletionListItem:(const struct CompletionListItem *)arg1;
- (id)imageForCompletionListItem:(const struct CompletionListItem *)arg1;
- (id)_textForFormAutoFillItem:(const struct CompletionListItem *)arg1;
- (id)_textForCreditCardItem:(const struct CompletionListItem *)arg1;
- (id)_textForPasswordItem:(const struct CompletionListItem *)arg1;
- (id)_imageForCreditCardItem:(const struct CompletionListItem *)arg1;
- (id)_imageForFormAutoFillItem:(const struct CompletionListItem *)arg1;
- (id)_imageForPasswordItem:(const struct CompletionListItem *)arg1;
- (id)_keychainImage;
- (BOOL)_isCredentialAutoFillItem:(const struct FormAutoFillCompletionListItem *)arg1;

@end

