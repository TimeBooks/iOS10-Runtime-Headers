/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchResultAccessedRequest : RadioRequest {
    SSURLConnectionRequest *_request;
    NSArray *_searchResults;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithAccessedSearchResults:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end