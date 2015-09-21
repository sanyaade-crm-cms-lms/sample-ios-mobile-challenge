//
//  CorporatePaymentsCrossBorderFxQuote.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsCrossBorderFxQuote
 @abstract CorporatePaymentsCrossBorderFxQuote class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsCrossBorderFxQuote
 @abstract Generated model object: CorporatePaymentsCrossBorderFxQuote.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsCrossBorderFxQuote(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsCrossBorderFxQuote/requestedOn @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsCrossBorderFxQuote : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsCrossBorderFxQuote.
 @result Class representing the data source associated with a CorporatePaymentsCrossBorderFxQuote.
 */
+ (Class)dataSource;

/*!
 @var requestedOn
 @abstract Generated model property: requested_on.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * requestedOn;

/*!
 @var fromAmount
 @abstract Generated model property: from_amount.
 */
@property (nonatomic, strong) NSNumber * fromAmount;

/*!
 @var fromCurrency
 @abstract Generated model property: from_currency.
 */
@property (nonatomic, strong) NSString * fromCurrency;

/*!
 @var rateExpiry
 @abstract Generated model property: rate_expiry.
 */
@property (nonatomic, strong) NSString * rateExpiry;

/*!
 @var rateReference
 @abstract Generated model property: rate_reference.
 */
@property (nonatomic, strong) NSString * rateReference;

/*!
 @var requestedBy
 @abstract Generated model property: requested_by.
 */
@property (nonatomic, strong) NSString * requestedBy;

/*!
 @var toAmount
 @abstract Generated model property: to_amount.
 */
@property (nonatomic, strong) NSNumber * toAmount;

/*!
 @var toCurrency
 @abstract Generated model property: to_currency.
 */
@property (nonatomic, strong) NSString * toCurrency;

/*!
 @var valueDate
 @abstract Generated model property: value_date.
 */
@property (nonatomic, strong) NSString * valueDate;

@end
