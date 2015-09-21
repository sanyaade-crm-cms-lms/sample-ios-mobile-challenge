//
//  CorporatePaymentsCrossBorderFxPayment.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsCrossBorderFxPayment
 @abstract CorporatePaymentsCrossBorderFxPayment class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsCrossBorderFxPayment
 @abstract Generated model object: CorporatePaymentsCrossBorderFxPayment.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsCrossBorderFxPayment(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsCrossBorderFxPayment/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsCrossBorderFxPayment : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsCrossBorderFxPayment.
 @result Class representing the data source associated with a CorporatePaymentsCrossBorderFxPayment.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var beneficiaryAccount
 @abstract Generated model property: beneficiary_account.
 */
@property (nonatomic, strong) NSString * beneficiaryAccount;

/*!
 @var beneficiaryAddress
 @abstract Generated model property: beneficiary_address.
 */
@property (nonatomic, strong) NSString * beneficiaryAddress;

/*!
 @var beneficiaryBank
 @abstract Generated model property: beneficiary_bank.
 */
@property (nonatomic, strong) NSString * beneficiaryBank;

/*!
 @var beneficiaryName
 @abstract Generated model property: beneficiary_name.
 */
@property (nonatomic, strong) NSString * beneficiaryName;

/*!
 @var citiRef
 @abstract Generated model property: citi_ref.
 */
@property (nonatomic, strong) NSString * citiRef;

/*!
 @var createdBy
 @abstract Generated model property: created_by.
 */
@property (nonatomic, strong) NSString * createdBy;

/*!
 @var createdOn
 @abstract Generated model property: created_on.
 */
@property (nonatomic, strong) NSString * createdOn;

/*!
 @var customerTxnRef
 @abstract Generated model property: customer_txn_ref.
 */
@property (nonatomic, strong) NSString * customerTxnRef;

/*!
 @var debtorAccount
 @abstract Generated model property: debtor_account.
 */
@property (nonatomic, strong) NSString * debtorAccount;

/*!
 @var debtorAddress
 @abstract Generated model property: debtor_address.
 */
@property (nonatomic, strong) NSString * debtorAddress;

/*!
 @var debtorName
 @abstract Generated model property: debtor_name.
 */
@property (nonatomic, strong) NSString * debtorName;

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
 @var paymentDetails
 @abstract Generated model property: payment_details.
 */
@property (nonatomic, strong) NSString * paymentDetails;

/*!
 @var rateReference
 @abstract Generated model property: rate_reference.
 */
@property (nonatomic, strong) NSString * rateReference;

/*!
 @var status
 @abstract Generated model property: status.
 */
@property (nonatomic, strong) NSString * status;

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
